//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CUIPSDLayoutMetricsChannel : NSObject
{
    struct CGRect _edgeInsets;
    NSString *_name;
}

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) struct CGRect edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (void)setEdgeInsets:(struct CGRect)arg1;
- (id)initWithEdgeInsets:(struct CGRect)arg1;
- (void)sanitizeEdgeInsets;
- (void)dealloc;

@end

