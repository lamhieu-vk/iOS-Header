//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NFContainerPoolObject : NSObject
{
    unsigned long long _ownership;
    id _strongObject;
    id _weakObject;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id weakObject; // @synthesize weakObject=_weakObject;
@property(readonly, nonatomic) id strongObject; // @synthesize strongObject=_strongObject;
@property(readonly, nonatomic) unsigned long long ownership; // @synthesize ownership=_ownership;
@property(readonly, nonatomic) id object;
- (id)initWithObject:(id)arg1 ownership:(unsigned long long)arg2;

@end

