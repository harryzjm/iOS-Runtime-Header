//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebHistoryItemPrivate : NSObject
{
    struct RefPtr<WebCore::HistoryItem, WTF::DumbPtrTraits<WebCore::HistoryItem>> _historyItem;
    double _lastVisitedTime;
    struct unique_ptr<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16>, std::__1::default_delete<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16>>> _redirectURLs;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end

