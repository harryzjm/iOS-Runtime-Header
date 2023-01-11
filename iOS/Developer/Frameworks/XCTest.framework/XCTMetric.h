//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface XCTMetric : NSObject
{
    NSString *_identifier;
    NSString *_name;
    NSString *_units;
    NSDictionary *_baseline;
    NSDictionary *_defaultBaseline;
    NSArray *_measurements;
}

@property(copy) NSArray *measurements; // @synthesize measurements=_measurements;
@property(copy) NSDictionary *defaultBaseline; // @synthesize defaultBaseline=_defaultBaseline;
@property(copy) NSDictionary *baseline; // @synthesize baseline=_baseline;
@property(copy) NSString *units; // @synthesize units=_units;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)init;

@end

