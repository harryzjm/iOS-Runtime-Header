//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HDHRSOriginInformation, NSDate, NSString;

@interface HDOriginalFHIRResourceObject
{
    NSDate *_firstSeenDate;
    HDHRSOriginInformation *_originInformation;
    NSString *_country;
}

+ (_Bool)supportsSecureCoding;
+ (id)resourceObjectWithData:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3 receivedDate:(id)arg4 firstSeenDate:(id)arg5 extractionHints:(unsigned long long)arg6 originVersion:(CDStruct_f6aba300)arg7 originBuild:(id)arg8 country:(id)arg9 error:(id *)arg10;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(readonly, copy, nonatomic) HDHRSOriginInformation *originInformation; // @synthesize originInformation=_originInformation;
@property(readonly, copy, nonatomic) NSDate *firstSeenDate; // @synthesize firstSeenDate=_firstSeenDate;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_initWithResourceIdentifier:(id)arg1 JSONObject:(id)arg2 sourceURL:(id)arg3 FHIRVersion:(id)arg4 receivedDate:(id)arg5 firstSeenDate:(id)arg6 extractionHints:(unsigned long long)arg7 originInformation:(id)arg8 country:(id)arg9;

@end
