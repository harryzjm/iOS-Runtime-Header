//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OABWriterClient : NSObject
{
}

- (unsigned short)eshSchemeColorIndexForOADSchemeColorValue:(int)arg1 state:(id)arg2;
- (void)writeClientDataFromTableCell:(id)arg1 toObject:(id)arg2 state:(id)arg3;
- (void)writeClientTextFromShape:(id)arg1 toObject:(id)arg2 state:(id)arg3;
- (void)writeClientDataFromDrawable:(id)arg1 toObject:(id)arg2 state:(id)arg3;
- (void)writeClientAnchorFromDrawable:(id)arg1 toObject:(id)arg2 state:(id)arg3;

@end

