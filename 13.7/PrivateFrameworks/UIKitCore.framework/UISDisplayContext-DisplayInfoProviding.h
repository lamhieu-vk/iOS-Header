//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitServices/UISDisplayContext.h>

#import <UIKitCore/_UIDisplayInfoProviding-Protocol.h>

@class FBSDisplayConfiguration, NSString;

@interface UISDisplayContext (DisplayInfoProviding) <_UIDisplayInfoProviding>
@property(readonly, nonatomic) double systemMinimumMargin;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsLandscapeRight;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsPortraitUpsideDown;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsLandscapeLeft;
@property(readonly, nonatomic) double homeAffordanceOverlayAllowance;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsPortrait;
@property(readonly, nonatomic) struct UIEdgeInsets peripheryInsets;

// Remaining properties
@property(nonatomic) unsigned long long artworkSubtype;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

