//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProactiveExperts/NSCopying-Protocol.h>
#import <ProactiveExperts/NSSecureCoding-Protocol.h>

@class NSDate, NSString, NSURL;

@interface PEXQuickTypeItem <NSSecureCoding, NSCopying>
{
    _Bool _shouldAggregate;
    unsigned char _flags;
    unsigned int _fields;
    NSString *_label;
    NSString *_value;
    NSString *_name;
    NSDate *_date;
    NSString *_originatingBundleID;
    NSURL *_originatingWebsiteURL;
    unsigned long long _predictionAge;
}

+ (_Bool)supportsSecureCoding;
+ (id)quickTypeItemWithLabel:(id)arg1 value:(id)arg2 name:(id)arg3 date:(id)arg4 fields:(unsigned int)arg5 originatingBundleID:(id)arg6 originatingWebsiteURL:(id)arg7 predictionAge:(unsigned long long)arg8 shouldAggregate:(_Bool)arg9 flags:(unsigned char)arg10 score:(double)arg11 source:(unsigned char)arg12 sourceIdentifier:(id)arg13;
@property(nonatomic) unsigned char flags; // @synthesize flags=_flags;
@property(nonatomic) _Bool shouldAggregate; // @synthesize shouldAggregate=_shouldAggregate;
@property(nonatomic) unsigned long long predictionAge; // @synthesize predictionAge=_predictionAge;
@property(retain, nonatomic) NSURL *originatingWebsiteURL; // @synthesize originatingWebsiteURL=_originatingWebsiteURL;
@property(retain, nonatomic) NSString *originatingBundleID; // @synthesize originatingBundleID=_originatingBundleID;
@property(nonatomic) unsigned int fields; // @synthesize fields=_fields;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (_Bool)isEqualToQuickTypeItem:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithLabel:(id)arg1 value:(id)arg2 name:(id)arg3 date:(id)arg4 fields:(unsigned int)arg5 originatingBundleID:(id)arg6 originatingWebsiteURL:(id)arg7 predictionAge:(unsigned long long)arg8 shouldAggregate:(_Bool)arg9 flags:(unsigned char)arg10 score:(double)arg11 source:(unsigned char)arg12 sourceIdentifier:(id)arg13;

@end
