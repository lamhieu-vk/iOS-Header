//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

@class _UIBackdropView;

@interface SUICFullScreenBlurPresentationController : UIPresentationController
{
    _UIBackdropView *_fullScreenBlurView;
}

- (void).cxx_destruct;
- (void)_stageViewsForFadeIn;
@property(nonatomic) unsigned long long blurStyle;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 blurStyle:(unsigned long long)arg3;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

@end

