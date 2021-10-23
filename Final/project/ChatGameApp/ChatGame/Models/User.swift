//
//  User.swift
//  ChatTodoAppWithFirebase
//
//  Created by 温田泰平 on 2021/09/13.
//

import Foundation
import Firebase
import FirebaseFirestore

class User {
    
    let email: String
    let username: String
    let createdAt: Timestamp
    let profileImageUrl: String
    
    var uid: String?
    
    init(dic: [String: Any]) {
        self.email = dic["email"] as? String ?? ""
        self.username = dic["username"] as? String ?? ""
        self.createdAt = dic["createdAt"] as? Timestamp ?? Timestamp()
        self.profileImageUrl = dic["profileImageUrl"] as? String ?? ""
    }
    
}
