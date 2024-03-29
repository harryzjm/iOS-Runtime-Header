//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBWorkbook : NSObject
{
}

+ (void *)createSheetNamesFromWorkbook:(id)arg1;
+ (id)readWithState:(id)arg1 reader:(id)arg2;
+ (int)xlSheetTypeEnumFromEDSheet:(id)arg1;
+ (void)setupProcessors:(id)arg1;
+ (void)readDocumentPresentation:(id)arg1 state:(id)arg2;
+ (void)readDocumentProperties:(id)arg1 state:(id)arg2;

@end

