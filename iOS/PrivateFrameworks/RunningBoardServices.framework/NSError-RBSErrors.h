//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (RBSErrors)
+ (id)rbs_errorClientNotAuthorized;
+ (id)rbs_errorClientNotEntitled:(id)arg1 permanent:(_Bool)arg2;
- (_Bool)rbs_isPermanentFailure;
@end

