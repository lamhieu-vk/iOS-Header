//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKPlayerEventMarshaling-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface IKPlayerStateChangeEventUserInfo : NSObject <IKPlayerEventMarshaling>
{
    NSMutableDictionary *_mutableProperties;
    long long _state;
    long long _oldState;
}

+ (long long)stateForStateName:(id)arg1;
+ (id)stateNameForState:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long oldState; // @synthesize oldState=_oldState;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSDictionary *properties;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
@property(nonatomic) double rate;
@property(nonatomic) double elapsedTime;
@property(nonatomic) double duration;
- (id)initWithState:(long long)arg1 oldState:(long long)arg2;
- (id)initWithState:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

