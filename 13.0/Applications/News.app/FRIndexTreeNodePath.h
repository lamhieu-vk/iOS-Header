//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FRIndexTreeNode;

@interface FRIndexTreeNodePath : NSObject
{
    long long indexOffset;
    FRIndexTreeNode *parent;
    FRIndexTreeNode *child;
    long long pathHeight;
}

+ (id)pathWithIndexOffset:(long long)arg1 parent:(id)arg2 child:(id)arg3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1 inTree:(id)arg2;

@end

