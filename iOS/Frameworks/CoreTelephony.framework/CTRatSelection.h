//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSString;

@interface CTRatSelection : NSObject <NSCopying, NSSecureCoding>
{
    unsigned char _mask;
    NSString *_selection;
    NSString *_preferred;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *preferred; // @synthesize preferred=_preferred;
@property(retain, nonatomic) NSString *selection; // @synthesize selection=_selection;
@property(nonatomic) unsigned char mask; // @synthesize mask=_mask;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end
