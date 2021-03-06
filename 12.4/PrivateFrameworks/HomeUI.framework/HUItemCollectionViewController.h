//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUCollectionViewController.h>

#import <HomeUI/HFExecutionEnvironmentObserver-Protocol.h>
#import <HomeUI/HFItemManagerDelegate-Protocol.h>
#import <HomeUI/HUItemManagerContainer-Protocol.h>
#import <HomeUI/HUItemPresentationContainer-Protocol.h>
#import <HomeUI/HUPreloadableViewController-Protocol.h>

@class HFItem, HFItemManager, NSHashTable, NSMutableArray, NSMutableSet, NSString;
@protocol NACancelable;

@interface HUItemCollectionViewController : HUCollectionViewController <HFExecutionEnvironmentObserver, HFItemManagerDelegate, HUItemManagerContainer, HUItemPresentationContainer, HUPreloadableViewController>
{
    _Bool _wantsPreferredContentSize;
    _Bool _hasFinishedInitialLoad;
    _Bool _visibilityUpdatesEnabled;
    HFItemManager *_itemManager;
    NSMutableArray *_foregroundUpdateFutures;
    NSMutableSet *_registeredCellClasses;
    id <NACancelable> _deferredVisibilityUpdate;
    NSHashTable *_childViewControllersAtViewWillAppearTime;
    NSHashTable *_childViewControllersAtViewWillDisappearTime;
}

+ (unsigned long long)updateMode;
@property(retain, nonatomic) NSHashTable *childViewControllersAtViewWillDisappearTime; // @synthesize childViewControllersAtViewWillDisappearTime=_childViewControllersAtViewWillDisappearTime;
@property(retain, nonatomic) NSHashTable *childViewControllersAtViewWillAppearTime; // @synthesize childViewControllersAtViewWillAppearTime=_childViewControllersAtViewWillAppearTime;
@property(retain, nonatomic) id <NACancelable> deferredVisibilityUpdate; // @synthesize deferredVisibilityUpdate=_deferredVisibilityUpdate;
@property(nonatomic) _Bool visibilityUpdatesEnabled; // @synthesize visibilityUpdatesEnabled=_visibilityUpdatesEnabled;
@property(readonly, nonatomic) NSMutableSet *registeredCellClasses; // @synthesize registeredCellClasses=_registeredCellClasses;
@property(retain, nonatomic) NSMutableArray *foregroundUpdateFutures; // @synthesize foregroundUpdateFutures=_foregroundUpdateFutures;
@property(nonatomic) _Bool hasFinishedInitialLoad; // @synthesize hasFinishedInitialLoad=_hasFinishedInitialLoad;
@property(retain, nonatomic) HFItemManager *itemManager; // @synthesize itemManager=_itemManager;
@property(nonatomic) _Bool wantsPreferredContentSize; // @synthesize wantsPreferredContentSize=_wantsPreferredContentSize;
- (void).cxx_destruct;
- (void)recursivelyDisableItemUpdates:(_Bool)arg1 withReason:(id)arg2;
@property(readonly, nonatomic) HFItem *hu_presentedItem;
- (void)executionEnvironmentRunningStateDidChange:(id)arg1;
- (id)hu_preloadContent;
- (void)itemManager:(id)arg1 didChangeSourceItem:(id)arg2;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (void)itemManager:(id)arg1 didChangeOverallLoadingState:(unsigned long long)arg2;
- (void)itemManager:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3;
- (void)itemManager:(id)arg1 didInsertSections:(id)arg2;
- (void)itemManager:(id)arg1 didRemoveSections:(id)arg2;
- (void)itemManager:(id)arg1 didMoveItem:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;
- (void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (id)itemManager:(id)arg1 futureToUpdateItems:(id)arg2 itemUpdateOptions:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)_updateTitle;
- (void)performBatchCollectionViewUpdatesForUpdateRequest:(id)arg1 reloadOnly:(_Bool)arg2;
- (struct CGSize)preferredContentSizeForCollectionViewContentSize:(struct CGSize)arg1;
- (_Bool)isLayoutDependentOnItemState;
- (id)childViewControllersToPreload;
- (_Bool)automaticallyUpdatesViewControllerTitle;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLoad;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

