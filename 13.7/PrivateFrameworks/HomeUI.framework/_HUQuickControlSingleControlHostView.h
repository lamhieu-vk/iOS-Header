//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NAUILayoutConstraintSet;
@protocol HULayoutAnchorProviding;

@interface _HUQuickControlSingleControlHostView : UIView
{
    id <HULayoutAnchorProviding> _preferredFrameLayoutGuide;
    UIView *_contentView;
    NAUILayoutConstraintSet *_constraintSet;
}

+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(readonly, nonatomic) NAUILayoutConstraintSet *constraintSet; // @synthesize constraintSet=_constraintSet;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)_setupConstraintSet;
- (void)updateConstraints;
- (void)didMoveToWindow;
- (_Bool)hasSingleControlView;
@property(retain, nonatomic) id <HULayoutAnchorProviding> preferredFrameLayoutGuide; // @synthesize preferredFrameLayoutGuide=_preferredFrameLayoutGuide;
- (id)initWithContentView:(id)arg1;

@end

