//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PKZipArchiver : NSObject
{
}

+ (void)noteBOMCopier:(struct _BOMCopier *)arg1 succeeded:(_Bool)arg2;
+ (void)disassociateBOMCopier:(struct _BOMCopier *)arg1;
+ (void)associateBOMCopier:(struct _BOMCopier *)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)zippedDataForURL:(id)arg1;
- (void)unzipStream:(id)arg1 toPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

