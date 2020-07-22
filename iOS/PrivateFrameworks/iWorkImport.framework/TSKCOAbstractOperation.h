//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSKCOOperation-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSKCOAbstractOperation : NSObject <TSKCOOperation>
{
    _Bool mNoop;
}

+ (id)newObjectForUnarchiver:(id)arg1 message:(const struct Message *)arg2;
+ (void)registerClass:(Class)arg1 forExtensionNumber:(int)arg2;
+ (id)_classRegistry;
@property(readonly, nonatomic) _Bool isNoop; // @synthesize isNoop=mNoop;
- (void)saveToArchiver:(id)arg1 message:(struct Operation *)arg2;
- (id)initWithUnarchiver:(id)arg1 message:(const struct Operation *)arg2;
- (void)dealloc;
- (id)initWithNoop:(_Bool)arg1;

@end

