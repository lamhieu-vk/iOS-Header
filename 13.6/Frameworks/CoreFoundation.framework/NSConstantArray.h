//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSConstantArray : NSArray
{
    unsigned long long _count;
    const id *_objects;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)new;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (oneway void)release;
- (unsigned long long)retainCount;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (id)retain;
- (id)autorelease;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectEnumerator;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;

@end

