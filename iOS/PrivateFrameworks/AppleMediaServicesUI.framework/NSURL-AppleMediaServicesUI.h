//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSDictionary;

@interface NSURL (AppleMediaServicesUI)
+ (id)ams_unescapedStringForString:(id)arg1;
- (id)ams_valueForQueryParameter:(id)arg1;
- (id)ams_URLByReplaceingQueryParameters:(id)arg1;
- (id)ams_URLByReplacingSchemeWithScheme:(id)arg1;
- (id)ams_URLByAppendingQueryParameters:(id)arg1;
@property(readonly, nonatomic) NSDictionary *ams_parameters;
@end
