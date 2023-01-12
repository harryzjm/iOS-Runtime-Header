//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DashBoard/NSObject-Protocol.h>

@class DBLeafIcon, NSString;

@protocol DBIconProviding <NSObject>
- (_Bool)isIconVisible:(DBLeafIcon *)arg1;
- (_Bool)iconCanDisplayBadge:(DBLeafIcon *)arg1;
- (DBLeafIcon *)iconForIdentifier:(NSString *)arg1;
- (_Bool)isIconVisibleForIdentifier:(NSString *)arg1;
@end

