//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class EDResources, EDWorkbook, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDProcessor : NSObject
{
    EDWorkbook *mWorkbook;
    EDResources *mResources;
    NSMutableArray *mObjects;
}

- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;
- (void)applyProcessorWithSheet:(id)arg1;
- (void)markObjectForPostProcessing:(id)arg1;
- (_Bool)isObjectSupported:(id)arg1;
- (void)dealloc;
- (id)initWithWorkbook:(id)arg1;

@end

