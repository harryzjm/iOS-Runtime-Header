//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TSPMutableLargeNumberArray
{
}

+ (Class)arraySegmentClass;
- (void)loadFromMessage:(const struct LargeNumberArray *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToMessage:(struct LargeNumberArray *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;

@end

