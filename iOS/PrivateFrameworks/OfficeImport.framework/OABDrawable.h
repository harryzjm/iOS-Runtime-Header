//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OABDrawable : NSObject
{
}

+ (id)readDrawableFromZipPackageData:(const struct CsData *)arg1 foundInObject:(id)arg2 state:(id)arg3;
+ (void)setUpXmlDrawingState:(id)arg1 withBinaryReaderState:(id)arg2 targetDocument:(id)arg3 colorMap:(id)arg4;
+ (id)readDrawablesFromContainer:(id)arg1 state:(id)arg2;
+ (id)readDrawableFromObject:(id)arg1 state:(id)arg2;

@end

