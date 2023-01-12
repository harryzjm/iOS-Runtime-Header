//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SKUIMetricsTemplateLoad : NSObject
{
    _Bool _responseWasCached;
    double _requestStartTime;
    double _responseStartTime;
    double _responseEndTime;
}

@property(nonatomic) _Bool responseWasCached; // @synthesize responseWasCached=_responseWasCached;
@property(nonatomic) double responseEndTime; // @synthesize responseEndTime=_responseEndTime;
@property(nonatomic) double responseStartTime; // @synthesize responseStartTime=_responseStartTime;
@property(nonatomic) double requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

