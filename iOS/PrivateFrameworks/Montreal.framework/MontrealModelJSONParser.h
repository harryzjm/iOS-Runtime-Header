//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MontrealNNModelNetwork, NSDictionary, NSString;

@interface MontrealModelJSONParser : NSObject
{
    NSString *_jsonDir;
    MontrealNNModelNetwork *_network;
    NSDictionary *_infoDictionary;
}

- (void).cxx_destruct;
@property(readonly) NSDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
@property(readonly) MontrealNNModelNetwork *network; // @synthesize network=_network;
@property(readonly) NSString *jsonDir; // @synthesize jsonDir=_jsonDir;
- (id)createJSONFromFile:(id)arg1;
- (id)initWithURL:(id)arg1;

@end

