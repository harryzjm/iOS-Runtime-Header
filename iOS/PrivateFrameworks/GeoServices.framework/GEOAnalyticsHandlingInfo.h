//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@interface GEOAnalyticsHandlingInfo : NSObject <NSSecureCoding>
{
    long long _logMsgType;
    long long _persistCount;
    long long _uploadSuccessCountOnWifi;
    long long _uploadSuccessByteCountOnWifi;
    long long _uploadSuccessCountOnCellular;
    long long _uploadSuccessByteCountOnCellular;
    long long _uploadFailureCount;
    long long _dbExpireCount;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long dbExpireCount; // @synthesize dbExpireCount=_dbExpireCount;
@property(nonatomic) long long uploadFailureCount; // @synthesize uploadFailureCount=_uploadFailureCount;
@property(nonatomic) long long uploadSuccessByteCountOnCellular; // @synthesize uploadSuccessByteCountOnCellular=_uploadSuccessByteCountOnCellular;
@property(nonatomic) long long uploadSuccessCountOnCellular; // @synthesize uploadSuccessCountOnCellular=_uploadSuccessCountOnCellular;
@property(nonatomic) long long uploadSuccessByteCountOnWifi; // @synthesize uploadSuccessByteCountOnWifi=_uploadSuccessByteCountOnWifi;
@property(nonatomic) long long uploadSuccessCountOnWifi; // @synthesize uploadSuccessCountOnWifi=_uploadSuccessCountOnWifi;
@property(nonatomic) long long persistCount; // @synthesize persistCount=_persistCount;
@property(nonatomic) long long logMsgType; // @synthesize logMsgType=_logMsgType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
