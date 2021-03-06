//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <iAd/ADActionViewControllerInterface-Protocol.h>

@class ADAdSpace, NSString;

@interface ADActionViewController : UIViewController <ADActionViewControllerInterface>
{
    _Bool _readyForPresentation;
    ADAdSpace *_adSpace;
}

+ (void)cancelRequestForActionViewControllerForAdSpaceController:(id)arg1;
+ (void)requestActionViewControllerForAdSpace:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak ADAdSpace *adSpace; // @synthesize adSpace=_adSpace;
- (void)setReadyForPresentation:(_Bool)arg1;
@property(readonly, nonatomic) _Bool readyForPresentation;
- (void)_remote_viewControllerCreatedForAdSpaceControllerWithIdentifier:(id)arg1;
- (void)clientApplicationCancelledAction;
- (void)clientApplicationDidEnterBackground;
- (void)didSetAdSpace;
- (void)dismiss;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

