//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableArray, NSString, TCTagger;

@protocol TCPostEditing
- (void)resetModels;
- (void)loadModelsInBackground:(_Bool)arg1;
- (void)checkString:(NSString *)arg1 range:(struct _NSRange)arg2 tagger:(TCTagger *)arg3 offset:(unsigned long long)arg4 options:(NSDictionary *)arg5 mutableResults:(NSMutableArray *)arg6;
- (id)initWithOptions:(NSDictionary *)arg1;
@end

