//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DVTMTReport : NSObject
{
}

- (void)recordSuccess:(_Bool)arg1 reason:(id)arg2;
- (void)recordID:(id)arg1 forKey:(char *)arg2;
- (void)recordNumber:(long long)arg1 forKey:(char *)arg2 deresolver:(CDUnknownBlockType)arg3;
- (void)recordTimeResult:(double)arg1 forKey:(char *)arg2 deresolver:(CDUnknownBlockType)arg3;
- (void)_logReport;
- (id)_initWithDomain:(char *)arg1 summarize:(_Bool)arg2;

@end
