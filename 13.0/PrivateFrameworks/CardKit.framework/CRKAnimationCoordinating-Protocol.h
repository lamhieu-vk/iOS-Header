//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CardKit/NSObject-Protocol.h>

@class UIView;

@protocol CRKAnimationCoordinating <NSObject>
@property(nonatomic) double duration;
@property(copy, nonatomic) CDUnknownBlockType completion;
@property(copy, nonatomic) CDUnknownBlockType animations;
@property(copy, nonatomic) CDUnknownBlockType finalSetup;
@property(copy, nonatomic) CDUnknownBlockType initialSetup;
@property(readonly, nonatomic) UIView *containerView;
@property(readonly, nonatomic, getter=isAnimated) _Bool animated;
@end

