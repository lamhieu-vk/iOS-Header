//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

@class UIView;

@interface PRXCardSlideUpPresentationController : UIPresentationController
{
    UIView *_dimmingView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (id)initWithDimmingStyle:(long long)arg1 presentedViewController:(id)arg2 presentingViewController:(id)arg3;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

@end

