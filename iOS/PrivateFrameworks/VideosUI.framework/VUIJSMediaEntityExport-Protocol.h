//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/JSExport-Protocol.h>

@class NSArray, NSDictionary, NSString, VUIJSMediaEntityType;

@protocol VUIJSMediaEntityExport <JSExport>
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) VUIJSMediaEntityType *type;
- (NSDictionary *)valuesForProperties:(NSArray *)arg1;
@end
