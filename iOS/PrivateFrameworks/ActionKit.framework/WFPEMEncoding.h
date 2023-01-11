//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WFPEMEncoding : NSObject
{
    NSString *_type;
    NSData *_data;
}

+ (id)decodePEM:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (id)encodedPEM;
- (id)initWithType:(id)arg1 data:(id)arg2;

@end
