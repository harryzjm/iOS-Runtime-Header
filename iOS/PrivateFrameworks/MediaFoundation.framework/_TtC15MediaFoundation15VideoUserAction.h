//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSDictionary, NSString;
@protocol MFTimeStamp;

@interface _TtC15MediaFoundation15VideoUserAction : _TtCs12_SwiftObject
{
    MISSING_TYPE *identifier;
    MISSING_TYPE *type;
    MISSING_TYPE *timeStamp;
    MISSING_TYPE *options;
    MISSING_TYPE *source;
    MISSING_TYPE *sourceID;
}

@property(nonatomic, copy) NSString *sourceID;
@property(nonatomic) long long source; // @synthesize source;
@property(nonatomic, copy) NSDictionary *options;
@property(nonatomic, retain) id <MFTimeStamp> timeStamp; // @synthesize timeStamp;
@property(nonatomic) long long type; // @synthesize type;
@property(nonatomic, copy) NSString *identifier;

@end

