//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBDisplayLayoutTransition : NSObject
{
    NSString *_name;
    NSString *_transitionReason;
    long long _displayType;
    _Bool _transitioning;
    long long _interfaceOrientation;
    long long _backlightLevel;
}

+ (void)flushLayoutForDisplayType:(long long)arg1;
+ (id)layoutForDisplayType:(long long)arg1;
+ (_Bool)isTransitioningForDisplayType:(long long)arg1;
@property(nonatomic) long long backlightLevel; // @synthesize backlightLevel=_backlightLevel;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(copy, nonatomic) NSString *transitionReason; // @synthesize transitionReason=_transitionReason;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) long long displayType; // @synthesize displayType=_displayType;
- (void).cxx_destruct;
- (void)endTransition;
- (void)beginTransition;
- (id)description;
- (void)dealloc;
- (id)initWithDisplayType:(long long)arg1 name:(id)arg2;

@end

