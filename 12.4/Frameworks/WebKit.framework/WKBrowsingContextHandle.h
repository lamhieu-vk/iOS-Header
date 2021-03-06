//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSSecureCoding-Protocol.h>

@interface WKBrowsingContextHandle : NSObject <NSSecureCoding>
{
    unsigned long long _pageID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic, getter=_pageID) unsigned long long pageID; // @synthesize pageID=_pageID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithPageID:(unsigned long long)arg1;

@end

