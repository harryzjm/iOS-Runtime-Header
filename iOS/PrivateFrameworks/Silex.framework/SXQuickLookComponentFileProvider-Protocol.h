//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@protocol SXQuickLookComponent;

@protocol SXQuickLookComponentFileProvider <NSObject>
- (void)fileForComponent:(id <SXQuickLookComponent>)arg1 onCompletion:(void (^)(SXQuickLookFile *))arg2 onError:(void (^)(NSError *))arg3;
@end

