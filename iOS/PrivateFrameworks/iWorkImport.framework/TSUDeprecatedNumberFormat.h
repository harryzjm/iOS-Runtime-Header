//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSSPropertyValueArchiving-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSUDeprecatedNumberFormat : NSObject <TSSPropertyValueArchiving>
{
}

+ (id)instanceWithArchive:(const struct Message *)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct Message *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct ChartsNumberFormatArchive *)arg1 unarchiver:(id)arg2;

@end

