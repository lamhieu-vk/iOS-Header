//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FRAppActivityObserving-Protocol.h"
#import "FRFeedBasedDataSourceDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class FRCollectionViewPagedLayout, FRExploreCollectionView, FRFeedBasedDataSource, FRPageControl, NSArray, NSString, UIButton, UILabel;
@protocol FRFeldsparContext;

@interface FRSubscriptionsFoundViewController : UIViewController <FRFeedBasedDataSourceDelegate, UICollectionViewDelegate, FRAppActivityObserving>
{
    _Bool _subscriptionDetectionViewControllerIsVisible;
    NSArray *_tagIDs;
    id <FRFeldsparContext> _feldsparContext;
    FRFeedBasedDataSource *_subscriptionTagsDataSource;
    FRExploreCollectionView *_subscriptionsCollectionView;
    FRCollectionViewPagedLayout *_subscriptionsCollectionViewLayout;
    FRPageControl *_subscriptionsPageControl;
    UILabel *_subscriptionTitle;
    UILabel *_subscriptionSubtitle;
    UIButton *_okButton;
    struct CGSize _subscriptionsGridSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool subscriptionDetectionViewControllerIsVisible; // @synthesize subscriptionDetectionViewControllerIsVisible=_subscriptionDetectionViewControllerIsVisible;
@property(nonatomic) struct CGSize subscriptionsGridSize; // @synthesize subscriptionsGridSize=_subscriptionsGridSize;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) UILabel *subscriptionSubtitle; // @synthesize subscriptionSubtitle=_subscriptionSubtitle;
@property(retain, nonatomic) UILabel *subscriptionTitle; // @synthesize subscriptionTitle=_subscriptionTitle;
@property(retain, nonatomic) FRPageControl *subscriptionsPageControl; // @synthesize subscriptionsPageControl=_subscriptionsPageControl;
@property(retain, nonatomic) FRCollectionViewPagedLayout *subscriptionsCollectionViewLayout; // @synthesize subscriptionsCollectionViewLayout=_subscriptionsCollectionViewLayout;
@property(retain, nonatomic) FRExploreCollectionView *subscriptionsCollectionView; // @synthesize subscriptionsCollectionView=_subscriptionsCollectionView;
@property(retain, nonatomic) FRFeedBasedDataSource *subscriptionTagsDataSource; // @synthesize subscriptionTagsDataSource=_subscriptionTagsDataSource;
@property(retain, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(retain, nonatomic) NSArray *tagIDs; // @synthesize tagIDs=_tagIDs;
- (void)feedDataSourceDidReloadData:(id)arg1;
- (void)feedDataSource:(id)arg1 wantsToPerformUpdate:(CDUnknownBlockType)arg2;
- (double)pageControlHeight;
- (void)pageSubscription:(id)arg1;
- (void)okTapped:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)updatePageControl;
- (_Bool)isLandscape;
- (_Bool)isPad;
- (_Bool)isCompactWidth;
- (_Bool)isViewVisible;
- (void)startReload;
- (void)updateLayout;
- (void)reloadData;
- (void)setupDataSource;
- (void)dealloc;
- (void)viewDidLoad;
- (void)recordExposureEventWithStartDate:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (id)initWithTagIDs:(id)arg1 feldsparContext:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

