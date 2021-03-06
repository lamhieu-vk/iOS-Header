//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/SFStartPageCollectionDataSource-Protocol.h>
#import <SafariServices/_SFStartPageDataSourceObserving-Protocol.h>

@class NSString, SFStartPageCollectionViewController, _SFSectionModel;

__attribute__((visibility("hidden")))
@interface SFStartPageBookmarkFolderDataSource : NSObject <SFStartPageCollectionDataSource, _SFStartPageDataSourceObserving>
{
    SFStartPageCollectionViewController *_collectionViewController;
    _SFSectionModel *_folder;
    CDUnknownBlockType _reloadHandler;
}

- (void).cxx_destruct;
- (id)titleForStartPageCollectionViewController:(id)arg1;
- (_Bool)startPageCollectionViewController:(id)arg1 isSectionExpanded:(id)arg2;
- (void)startPageCollectionViewController:(id)arg1 toggleSectionExpanded:(id)arg2;
- (id)sectionsForStartPageCollectionViewController:(id)arg1;
- (void)reloadDataAnimatingDifferences:(_Bool)arg1;
- (void)_reloadFolder;
- (void)connectToViewController:(id)arg1;
- (id)initWithReloadHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

