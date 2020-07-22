//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _SFOpenInOtherAppActivityViewController
{
    NSString *_filePath;
}

+ (_Bool)canOpenWithFilePath:(id)arg1 UTI:(id)arg2 sourceURL:(id)arg3;
+ (id)_activityItemsForFilePath:(id)arg1 UTI:(id)arg2 sourceURL:(id)arg3;
+ (id)_applicationsForDocumentProxy:(id)arg1;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (void)_prepareActivity:(id)arg1;
- (id)initWithFilePath:(id)arg1 UTI:(id)arg2 sourceURL:(id)arg3;

@end

