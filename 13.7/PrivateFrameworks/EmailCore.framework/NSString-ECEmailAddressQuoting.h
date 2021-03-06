//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

#import <EmailCore/ECEmailAddressConvertible-Protocol.h>

@class ECEmailAddress;

@interface NSString (ECEmailAddressQuoting) <ECEmailAddressConvertible>
@property(readonly, copy, nonatomic) NSString *ecemailaddress_uniquedDomain;
- (id)ecemailaddress_quotedString;
@property(readonly, copy, nonatomic) NSString *ecemailaddress_trimmedAndQuotedDisplayName;
@property(readonly, copy, nonatomic) NSString *ecemailaddress_trimmedAndQuotedLocalPart;
@property(readonly, nonatomic) NSString *stringValue;
@property(readonly, nonatomic) ECEmailAddress *emailAddressValue;
@property(readonly, copy) NSString *ec_messageIDSubstring;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

