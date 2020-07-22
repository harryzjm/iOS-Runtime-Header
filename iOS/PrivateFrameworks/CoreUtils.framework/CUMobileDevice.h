//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <CoreUtils/NSCopying-Protocol.h>

@class NSString, NSUUID;

@interface CUMobileDevice : NSObject <NSCopying>
{
    _Bool _connected;
    _Bool _paired;
    _Bool _placeholder;
    NSUUID *_identifier;
    NSString *_internalModel;
    NSString *_name;
    NSString *_udid;
    NSString *_wifiAddress;
}

@property(copy, nonatomic) NSString *wifiAddress; // @synthesize wifiAddress=_wifiAddress;
@property(copy, nonatomic) NSString *udid; // @synthesize udid=_udid;
@property(nonatomic) _Bool placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) _Bool paired; // @synthesize paired=_paired;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *internalModel; // @synthesize internalModel=_internalModel;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

