//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXAssetCollectionActionManager.h>

#import <PhotosUICore/PXActivityActionDelegate-Protocol.h>

@class NSDictionary, NSMapTable, NSString, PXAssetCollectionActionPerformer;

@interface PXPhotoKitAssetCollectionActionManager : PXAssetCollectionActionManager <PXActivityActionDelegate>
{
    NSMapTable *__actionTypeByBarButtonItem;
    NSDictionary *__performerClassesByType;
    PXAssetCollectionActionPerformer *__activePerformer;
}

- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setActivePerformer:) PXAssetCollectionActionPerformer *_activePerformer; // @synthesize _activePerformer=__activePerformer;
@property(readonly, nonatomic) NSDictionary *_performerClassesByType; // @synthesize _performerClassesByType=__performerClassesByType;
@property(readonly, nonatomic) NSMapTable *_actionTypeByBarButtonItem; // @synthesize _actionTypeByBarButtonItem=__actionTypeByBarButtonItem;
- (void)performActivity:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2;
- (void)_handleActionPerformerComplete:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)_executeActionTypeIfPossible:(id)arg1;
- (void)_handleBarButtonItem:(id)arg1;
- (id)activityForActionType:(id)arg1;
- (id)alertActionForActionType:(id)arg1;
- (id)barButtonItemForActionType:(id)arg1;
- (Class)_firstPossiblePerformerForActionType:(id)arg1;
- (id)systemImageNameForActionType:(id)arg1;
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2;
- (id)actionPerformerForActionType:(id)arg1;
- (_Bool)canPerformActionType:(id)arg1;
- (id)initWithAssetCollection:(id)arg1 displayTitleInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

