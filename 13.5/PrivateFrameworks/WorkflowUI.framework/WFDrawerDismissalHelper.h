//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, UIScrollView, WFDrawerDismissalPanMediator;
@protocol WFDrawerDismissalHelperDelegate;

@interface WFDrawerDismissalHelper : NSObject
{
    _Bool _didDismiss;
    id <WFDrawerDismissalHelperDelegate> _delegate;
    UIScrollView *_scrollView;
    NSHashTable *_activeGestureRecognizers;
    WFDrawerDismissalPanMediator *_panMediator;
    double _dismissalRectTopEdge;
    double _currentInsideness;
}

- (void).cxx_destruct;
@property(nonatomic) double currentInsideness; // @synthesize currentInsideness=_currentInsideness;
@property(nonatomic) double dismissalRectTopEdge; // @synthesize dismissalRectTopEdge=_dismissalRectTopEdge;
@property(nonatomic) _Bool didDismiss; // @synthesize didDismiss=_didDismiss;
@property(retain, nonatomic) WFDrawerDismissalPanMediator *panMediator; // @synthesize panMediator=_panMediator;
@property(retain, nonatomic) NSHashTable *activeGestureRecognizers; // @synthesize activeGestureRecognizers=_activeGestureRecognizers;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <WFDrawerDismissalHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissCardWithPanGestureRecognizer:(id)arg1;
- (void)dismissCardWithVelocity:(double)arg1;
- (double)insidenessForGestureRecognizer:(id)arg1;
- (void)panGestureDidChange:(id)arg1;
- (void)panGestureRecognizerDidEnd:(id)arg1;
- (void)panGestureRecognizerDidBegin:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)dealloc;
- (id)initWithScrollView:(id)arg1;

@end

