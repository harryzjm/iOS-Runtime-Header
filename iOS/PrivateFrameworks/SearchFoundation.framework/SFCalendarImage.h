//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFCalendarImage-Protocol.h>

@class NSData, NSDate, NSDictionary, NSString;

@interface SFCalendarImage <SFCalendarImage, NSSecureCoding, NSCopying>
{
    NSDate *_date;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *contentType;
@property(nonatomic) double cornerRadius;
@property(nonatomic) int cornerRoundingStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *identifier;
@property(copy) NSData *imageData;
@property(nonatomic) _Bool isTemplate;
@property(copy, nonatomic) NSString *keyColor;
@property(nonatomic) double scale;
@property(nonatomic) _Bool shouldCropToCircle;
@property(nonatomic) struct CGSize size;
@property(nonatomic) int source;
@property(readonly) Class superclass;

@end
