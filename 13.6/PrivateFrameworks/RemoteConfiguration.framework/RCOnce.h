//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RCMutexLock;

@interface RCOnce : NSObject
{
    _Bool _finished;
    RCMutexLock *_lock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RCMutexLock *lock; // @synthesize lock=_lock;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
- (_Bool)hasBeenTriggered;
- (_Bool)trigger;
- (void)executeOnce:(CDUnknownBlockType)arg1;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)init;

@end

