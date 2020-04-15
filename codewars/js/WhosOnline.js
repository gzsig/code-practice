const whosOnline = friends => {
  let status = {
    online: [],
    offline: [],
    away: []
  };
  friends.forEach(element => {
    if (element.status === "offline") {
      status.offline.push(element.username);
    }
    if (element.status === "online") {
      if (element.lastActivity > 10) {
        status.away.push(element.username);
      } else {
        status.online.push(element.username);
      }
    }
  });
  if(!status.online.length){delete status.online}
  if(!status.away.length){delete status.away}
  if(!status.offline.length){delete status.offline}
  return status
};