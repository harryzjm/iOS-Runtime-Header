//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXSeries : NSObject
{
}

+ (void)resolveSeriesStyle:(id)arg1 state:(id)arg2;
+ (id)chdSeriesFromXmlSeriesElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)readFrom:(struct _xmlNode *)arg1 state:(id)arg2;
+ (Class)chxSeriesClassWithState:(id)arg1;

@end

