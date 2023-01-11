//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSTimeZone;

@interface PAMediaConversionServiceSetCreationDateImageMetadataPolicy
{
    NSDate *_creationDate;
    NSTimeZone *_timeZone;
}

+ (_Bool)supportsSecureCoding;
+ (id)policyWithCreationDate:(id)arg1 inTimeZone:(id)arg2;
- (void).cxx_destruct;
@property(retain) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (id)processMetadata:(id)arg1;
- (_Bool)metadataNeedsProcessing:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
