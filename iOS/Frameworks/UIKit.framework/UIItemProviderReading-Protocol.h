//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSItemProviderReading-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol UIItemProviderReading <NSItemProviderReading>

@optional
+ (id)newObjectWithItemProviderData:(NSData *)arg1 typeIdentifier:(NSString *)arg2 options:(NSDictionary *)arg3 error:(id *)arg4;
- (id)initWithItemProviderData:(NSData *)arg1 typeIdentifier:(NSString *)arg2 error:(id *)arg3;
@end

