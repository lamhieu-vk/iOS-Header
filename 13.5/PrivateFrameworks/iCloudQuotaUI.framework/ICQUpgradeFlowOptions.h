//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iCloudQuotaUI/NSCopying-Protocol.h>
#import <iCloudQuotaUI/NSSecureCoding-Protocol.h>

@class UIColor;

@interface ICQUpgradeFlowOptions : NSObject <NSCopying, NSSecureCoding>
{
    UIColor *_navigationBarTintColor;
    UIColor *_buttonTintColor;
}

+ (_Bool)supportsSecureCoding;
+ (id)flowOptionsFromData:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) UIColor *buttonTintColor; // @synthesize buttonTintColor=_buttonTintColor;
@property(copy, nonatomic) UIColor *navigationBarTintColor; // @synthesize navigationBarTintColor=_navigationBarTintColor;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializedData;

@end

