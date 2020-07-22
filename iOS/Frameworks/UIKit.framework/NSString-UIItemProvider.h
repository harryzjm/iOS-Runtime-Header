//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

#import <UIKit/UIItemProviderReading-Protocol.h>
#import <UIKit/UIItemProviderWriting-Protocol.h>

@class NSArray;

@interface NSString (UIItemProvider) <UIItemProviderReading, UIItemProviderWriting>
+ (id)newObjectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)registerLoadHandlersToItemProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@end

