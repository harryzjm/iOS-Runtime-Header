//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXEdgeSpacing-Protocol.h>

@class NSString;

@interface SXInsertEdgeSpacing : NSObject <SXEdgeSpacing>
{
    struct _SXConvertibleValue _top;
    struct _SXConvertibleValue _right;
    struct _SXConvertibleValue _bottom;
    struct _SXConvertibleValue _left;
}

@property(readonly, nonatomic) struct _SXConvertibleValue left; // @synthesize left=_left;
@property(readonly, nonatomic) struct _SXConvertibleValue bottom; // @synthesize bottom=_bottom;
@property(readonly, nonatomic) struct _SXConvertibleValue right; // @synthesize right=_right;
@property(readonly, nonatomic) struct _SXConvertibleValue top; // @synthesize top=_top;
- (id)initWithTop:(struct _SXConvertibleValue)arg1 bottom:(struct _SXConvertibleValue)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

